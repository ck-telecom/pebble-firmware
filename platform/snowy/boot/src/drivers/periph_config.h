/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#if defined(MICRO_FAMILY_STM32F2)
#include "stm32f2xx.h"
#elif defined(MICRO_FAMILY_STM32F4)
#include "stm32f4xx.h"
#endif

typedef void (*ClockCmd)(uint32_t periph, FunctionalState state);

static inline void periph_config_init(void) {}
static inline void periph_config_acquire_lock(void) {}
static inline void periph_config_release_lock(void) {}

static inline void periph_config_enable(ClockCmd clock_cmd, uint32_t periph) {
  clock_cmd(periph, ENABLE);
}

static inline void periph_config_disable(ClockCmd clock_cmd, uint32_t periph) {
  clock_cmd(periph, DISABLE);
}

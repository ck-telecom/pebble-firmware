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

#include "kernel/events.h"
#include "services/normal/blob_db/api.h"
#include "util/attributes.h"

status_t WEAK blob_db_delete(BlobDBId db_id, const uint8_t *key, int key_len) {
  return S_SUCCESS;
}


void WEAK blob_db_event_put(enum BlobDBEventType type, BlobDBId db_id, const uint8_t *key,
                            int key_len) {}

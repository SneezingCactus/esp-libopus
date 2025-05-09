#ifndef OPUS_ESP_CONFIG_H
#define OPUS_ESP_CONFIG_H

#ifdef CONFIG_OPUS_USE_SPIRAM

#define OVERRIDE_OPUS_ALLOC
#include "esp_heap_caps.h"

static inline void* opus_alloc(size_t size) { return heap_caps_malloc(size, MALLOC_CAP_SPIRAM | MALLOC_CAP_8BIT); }

#endif

#endif
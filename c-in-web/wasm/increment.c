#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float inc(int x) {
  return ++x;
}
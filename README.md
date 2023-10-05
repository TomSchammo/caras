
# Logging library in C

## Usage

To use the library, simply paste the `log.h` header file into your project.
Logging can be enabled with `#define LOG` *before* the include statement.
All logging is written to `stderr`.

### Example

```c
#define LOG

#include <../include/log.h>

int main(void) {
    debug("test %s", "1");
    info("ok");
    warn("abc %u", 1);
    error("noo %#x", 0xabc);

    return 0;
}
```

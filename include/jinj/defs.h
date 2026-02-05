#include <stddef.h>
#include <stdint.h>

#if defined(bool) || defined(_bool)
#if defined(bool)
    typedef bool jinj_bool_t;
#elif defined(_Bool)
    typedef _Bool jinj_bool_t;
#endif
#define JINJ_TRUE ((jinj_bool_t)1)
#define JINJ_FALSE ((jinj_bool_t)0)
#else
typedef enum jinj_bool_t {
    JINJ_TRUE  = 0,
    JINJ_FALSE = 1,
} jinj_bool_t;
#endif

typedef size_t jinj_usize_t;
typedef uint32_t jinj_rune_t;
typedef uint64_t jinj_hash_t;
typedef uint8_t jinj_byte_t;

#if defined(__GNUC__) || defined(__clang__)
#   define _JINJ_ATTR_MALLOC __attribute__((malloc))
#else
#   define _JINJ_ATTR_MALLOC
#endif

#pragma once

/**
 * 2 levels of indirection for common operations
 */
#define CONCAT_(x, y) x##y
#define CONCAT(x, y) CONCAT_(x, y)

#define STR_(...) #__VA_ARGS__
#define STR(...) STR_(__VA_ARGS__)

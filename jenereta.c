//!gcc {0} -o out; ./out

#include <exotic/xtd/xstring.h>
#include <exotic/logax.h>

int main(int argc, char** argv) {
    logax_write_json_format_to_stream(stdout, LOGAX_OPTION_ALL | LOGAX_LEVEL_TRACE, "%s", "This is a trace output");
}


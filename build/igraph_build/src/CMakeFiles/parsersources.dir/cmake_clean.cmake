file(REMOVE_RECURSE
  "io/parsers/dl-lexer.c"
  "io/parsers/dl-lexer.h"
  "io/parsers/dl-parser.c"
  "io/parsers/dl-parser.h"
  "io/parsers/gml-lexer.c"
  "io/parsers/gml-lexer.h"
  "io/parsers/gml-parser.c"
  "io/parsers/gml-parser.h"
  "io/parsers/lgl-lexer.c"
  "io/parsers/lgl-lexer.h"
  "io/parsers/lgl-parser.c"
  "io/parsers/lgl-parser.h"
  "io/parsers/ncol-lexer.c"
  "io/parsers/ncol-lexer.h"
  "io/parsers/ncol-parser.c"
  "io/parsers/ncol-parser.h"
  "io/parsers/pajek-lexer.c"
  "io/parsers/pajek-lexer.h"
  "io/parsers/pajek-parser.c"
  "io/parsers/pajek-parser.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/parsersources.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()

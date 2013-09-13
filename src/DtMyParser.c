#include "DtMyParser.h"

struct DtMyParser
{
  // the data structure definition is here; it is documented for my sake, but I
  // do not want the private members to show up in the documentation for the
  // public API
  void *bogus;
};

void dt_my_parser_delete(DtMyParser *parser)
{
  // implementation
}

DtMyParser *dt_my_parser_new(const char *filename)
{
  // implementation
  return 0;
}

DtMyParser *dt_my_parser_new_from_fh(FILE *file)
{
  // implementation
  return 0;
}

DtMyObject *dt_my_parser_next_object(DtMyParser *parser)
{
  // implementation
  return 0  ;
}

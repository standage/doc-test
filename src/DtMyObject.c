#include "DtMyObject.h"

struct DtMyObject
{
  // the data structure definition is here; it is documented for my sake, but I
  // do not want the private members to show up in the documentation for the
  // public API
  void *data;
};

void dt_my_object_delete(DtMyObject *obj)
{
  // implementation
}

void *dt_my_object_get(DtMyObject *obj)
{
  // implementation
  return 0;
}

DtMyObject *dt_my_object_new(void *data)
{
  // implementation
  return 0;
}

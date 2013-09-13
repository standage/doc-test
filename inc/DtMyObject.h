#ifndef DT_MY_OBJECT
#define DT_MY_OBJECT

/**
 * @file  DtMyObject.h
 * @brief API for the DtMyObject class
 *
 * The DtMyObject class contains super special data.
 */

/**
 * @struct DtMyObject
 * @brief Data structure of the DtMyObject class
 */
typedef struct DtMyObject DtMyObject;

/**
 * @brief Destructor for DtMyObject class
 * @param obj data object to be destroyed
 */
void dt_my_object_delete(DtMyObject *obj);

/**
 * @brief  Retrieve the data stored in this object
 * @param  obj data object
 * @return a pointer to the data
 */
void *dt_my_object_get(DtMyObject *obj);

/**
 * @brief  Constructor for DtMyObject class
 * @param  data a pointer to some super special data
 * @return a new data object
 */
DtMyObject *dt_my_object_new(void *data);

#endif

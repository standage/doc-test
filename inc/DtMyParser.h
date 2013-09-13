#ifndef DT_MY_PARSER
#define DT_MY_PARSER

#include <stdio.h>
#include "DtMyObject.h"

/**
 * @file  DtMyParser.h
 * @brief API for the DtMyParser class
 *
 * The DtMyParser class is used for parsing DtMyObjects from data files.
 */
typedef struct DtMyParser DtMyParser;

/**
 * @brief Destructor for DtMyParser class
 * @param parser parser object to be destroyed
 */
void dt_my_parser_delete(DtMyParser *parser);

/**
 * @brief  Constructor for DtMyParser class
 * @param  filename path of the data file to be parsed
 * @return a new parser object
 */
DtMyParser *dt_my_parser_new(const char *filename);

/**
 * @brief Constructor for DtMyParser class
 *
 * Alternative constructor for the DtMyParser class, using a filehandle instead
 * of a filename. The user is responsible to close the file handle after
 * destroying this object.
 * 
 * @param file handle to the data file to be parsed
 * @return a new parser object
 */
DtMyParser *dt_my_parser_new_from_fh(FILE *file);

/**
 * @brief  Retrieve the next object from the data file
 * @param  parser parser object
 * @return the next object in the data file, or NULL if the object stream is
 *         exhausted
 */
DtMyObject *dt_my_parser_next_object(DtMyParser *parser);

#endif

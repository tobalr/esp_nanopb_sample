/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 at Thu Nov 22 21:40:46 2018. */

#ifndef PB_TOBALR_SAMPLE_PB_H_INCLUDED
#define PB_TOBALR_SAMPLE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _tobalr_testmessage {
    float temperature;
    float humidity;
    float batteryVoltage;
/* @@protoc_insertion_point(struct:tobalr_testmessage) */
} tobalr_testmessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define tobalr_testmessage_init_default          {0, 0, 0}
#define tobalr_testmessage_init_zero             {0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define tobalr_testmessage_temperature_tag       1
#define tobalr_testmessage_humidity_tag          2
#define tobalr_testmessage_batteryVoltage_tag    3

/* Struct field encoding specification for nanopb */
extern const pb_field_t tobalr_testmessage_fields[4];

/* Maximum encoded size of messages (where known) */
#define tobalr_testmessage_size                  15

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SAMPLE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
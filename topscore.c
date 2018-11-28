#include <stdbool.h>
#include "topscore.h"
#include <mongoc.h>
#include <bcon.h>

void connect_to_database() {
//    mongoc_client_t *client   = mongoc_client_new ("mongodb://localhost:27017/");
//    mongoc_database_t *gamedb = mongoc_client_get_database (client, "2048");
//    mongoc_collection_t *collection = mongoc_database_get_collection (gamedb, "rates");
//    bson_t *query;
//    query = bson_new();
//
//    const bson_t *doc;
//    char *str;
//
//    mongoc_cursor_t *cursor = mongoc_collection_find_with_opts (collection, query, NULL, NULL);
//
//    while (mongoc_cursor_next (cursor, &doc)) {
//      str = bson_as_canonical_extended_json (doc, NULL);
//      printf ("%s\n", str);
//      bson_free (str);
//   }
//    bson_error_t error;
//    bson_t *bson;
//    const char *json = "{\"name\": {\"first\":\"Grace\", \"last\":\"Hopper\"}}";
//    bson = bson_new_from_json ((const uint8_t *)json, -1, &error);
}

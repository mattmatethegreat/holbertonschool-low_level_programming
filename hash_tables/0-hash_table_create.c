#include <stdlib.h>
#include <string.h>

typedef struct Ht_item
{
   char* key;
   char* value;
} Ht_item;

typedef struct HashTable
{
   Ht_item** items;
   unsigned long int size;
   unsigned long int count;
} HashTable;

HashTable* hash_table_create(unsigned long int size)
{
   HashTable* ht;

   ht = malloc(sizeof(HashTable));
   if (ht == NULL)
       return NULL;

   ht->items = calloc(size, sizeof(Ht_item*));
   if (ht->items == NULL)
   {
       free(ht);
       return NULL;
   }

   ht->size = size;
   ht->count = 0;

   return ht;
}

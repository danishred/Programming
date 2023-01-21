// Implements a dictionary's functionality

#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Declaration of free_node func.
void free_node(node *n);

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Initializing variable for keeping track of dictionary size
unsigned int dict_size = 0;

// Initializing variable for checking for word
unsigned int test = 0;

// Hash table
node *table[N] = {NULL};

// Creating a node to allocate to
node *n = NULL;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Hashing word to obtain hash value
    int hash_key = hash(word);

    // Setting cursor variable
    node *cursor = table[hash_key];

    // Checking linked list in hash table
    do
    {
        test = (strcasecmp(cursor->word, word));
        cursor = cursor->next;
    } while (test != 0 || cursor != NULL);

    // If word is found
    if (test == 0)
    {
        return true;
    }

    // If word is not found
    else
        return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Openning dictionary
    FILE *file = fopen(dictionary, "r");

    // Instructions if dictionary is not read
    if (file == NULL)
    {
        printf("Dictionay cannot be accessed\n");
        printf("Usage: speller [dictionary] text");
        return false;
    }

    // Declaring variable for storing word
    char dict_word[LENGTH + 1];

    // Loop for reading string from the file and loading
    while (fscanf(file, "%s", dict_word) != EOF)
    {
        // Keeping track of dictionary size
        dict_size++;

        // Allocating memory to node
        n = malloc(sizeof(node));

        // If memory cannot be allocated
        if (n == NULL)
        {
            printf("Failed to allocate mem. for load func.\n");
            return false;
        }

        // Copying word from file into node
        strcpy(n->word, dict_word);

        // Hashing and storing key
        unsigned int hash_key = hash(n->word);

        // prepending node to table
        n->next = table[hash_key];
        table[hash_key] = n;
    }

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return dict_size;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // Creating cursor node
    node *cursor = NULL;
    node *tmp = NULL;

    for (int i = 0; i < N; i++)
    {
        // Choosing linked list
        cursor = table[i];
        // Freeing selected linked list's nodes
        while (cursor != NULL)
        {
            tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }
    }
    return true;
}
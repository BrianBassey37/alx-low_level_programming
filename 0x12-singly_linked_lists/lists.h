nclude <stdlib.h>

/**
 *  * struct list_s - singly linked list
 *   * @str: string - (malloc'ed string)
 *   @@ -24,4 +26,10 @@ typedef struct list_s
 *   struct list_s *next;
 *   } list_t;
 *
 *   size_t print_list(const list_t *h);
 *   size_t list_len(const list_t *h);
 *   list_t *add_node(list_t **head, const char *str);
 *   list_t *add_node_end(list_t **head, const char *str);
 *   void free_list(list_t *head);
 *
 *   #endif /* LISTS_H */

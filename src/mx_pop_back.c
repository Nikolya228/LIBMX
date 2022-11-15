#include "../inc/libmx.h"

void mx_pop_back(t_list **list) {
	if (*list == NULL || list == NULL) {
        return;
    }
    else if ((*list)->next == NULL) {
        free(*list);
        *list = NULL;
		return;
    }
    else {
        t_list *node = *list; 
        while (node && node->next->next != NULL) {
            node = node->next;
        }
        free(node->next);
        node->next = NULL;
		return;
    }
}


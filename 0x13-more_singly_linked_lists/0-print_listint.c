size_t print_listint(const listint_t *h)
{   
    int i;
    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        i++;
    }
    return (i);
}

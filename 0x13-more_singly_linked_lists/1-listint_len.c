size_t listint_len(const listint_t *h)
{
      
    int i;
    while (h)
    {
        h = h->next;
        i++;
    }
    return (i);
}

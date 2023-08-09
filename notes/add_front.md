```c
t_list *head_ref;
t_list *node1;

node1 = ft_lstnew("node 1\n");
head_ref = node1;
```

Criamos uma referencia pro começo da lista, e criamos o `node1`. A referência pro começo da lista aponta pro `node1`.

```c
t_list *node2;
node2 = ft_lstnew("node 2\n");

ft_lstadd_front(&head_ref, node2);
```

Criamos um segundo node e adicionamos ele na frente do `head_ref`. Agora o `head_ref` precisa apontar pro `node2`. Por isso a linha `*lst = new` é nescessária na implementação do `ft_lstadd_front`.

Para testar:

```c
t_list *head_ref;
t_list *node1;

node1 = ft_lstnew("node 1\n");
head_ref = node1;
printf("%s", (char *) head_ref->content);

t_list *node2;
node2 = ft_lstnew("node 2\n");
ft_lstadd_front(&head_ref, node2);

printf("%s", (char *) head_ref->content);

free(head_ref->next);
free(node2);
```

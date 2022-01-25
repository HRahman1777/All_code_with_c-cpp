
void Delete_a_data()
{
    int data;
    struct node *tmp, *q;
    scanf("%d",&data);
    tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->data==data)
            break;
        q=tmp;
        tmp=tmp->next;
    }
}

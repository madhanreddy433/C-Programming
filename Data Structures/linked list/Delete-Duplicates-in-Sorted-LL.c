void delete_duplicates(){
	struct node *p, *q;
	
	p = head;
	q = p->next;
	
	while(q != NULL){
		if(p->data != q->data){
			p = q;
			q = q->next;
		}else{
			p->next = q->next;
			free(q);
			q = p->next;
		}
	}
}

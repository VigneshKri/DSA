void removed(node* &head)
   {
    if(head->data==head->next->data)
    {
     
        head=head->next->next;
        
    }
    node* dummy = new node;
  
    
    dummy->next = head;
  
    
    node* prev = dummy;
  
  
    node* current = head;
  
    while (current != NULL) {
      
        while (current->next != NULL && prev->next->data == current->next->data)
            current = current->next;
  
       
        if (prev->next == current)
            prev = prev->next;
  
       
        else
            prev->next = current->next;
  
        current = current->next;
    }
  
   
    head = dummy->next;

   }

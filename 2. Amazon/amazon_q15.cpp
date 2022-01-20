class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here  
        struct Node* p= head;
        struct Node* q= head;
        int countm=0;
        int countn=-1;
        while(p!=NULL){
            countm++;
            if(countm==M){
                countn=0;
                q=p;
                while(countn!=N && p!=NULL){
                    countn++;
                    p=p->next;
                }
                if(p==NULL){
                    q->next=NULL;
                    break;
                }
                q->next=p->next;
                countn=-1;
                countm=0;
            }
            p=p->next;
        }
    }
};
#include <stdio.h>

int main (){
    int no_of_students=0,no_of_unassigned_task=0;
    int no_of_events;
    scanf("%d",&no_of_events);
    int arr[no_of_events];
    for (int i = 0; i < no_of_events; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < no_of_events; i++)
    {
        if (arr[i]==-1 && no_of_students==0)
        {
            no_of_unassigned_task++;
        }
        else if (arr[i]==-1 && no_of_students!=0)
        {
            no_of_students--;
        }
        else if (arr[i]!=-1)
        {
            no_of_students+=arr[i];
        }
        
    }

    printf("%d",no_of_unassigned_task);
    
    
    return 0;
}
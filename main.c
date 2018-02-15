# include<stdio.h>
//void calculate(int a[][]);
void main()
{
 int matrix[20][20],i,j,k,value,nodes,temp1,temp2,x=65,y=65,z;
 char ans;
  printf("enter the value of nodes ");
  scanf("%d",&nodes);
   for(i=1;i<=nodes;i++)
    {
       z=y;
       z++;
     for(j=i;j<=nodes;j++)
      {
        if(i==j)
         {
          printf("enter the value for node %c ",x);
          scanf("%d",&value);
          matrix[i][j]=value;
          x++;
         }
         else{
             printf("is node %c and %c connected ",y,z);
             scanf("%s",&ans);
             temp1=i;
             temp2=j;
              switch (ans){
               case 'y': matrix[i][j]=1;
                 k=temp1;
                 temp1=temp2;
                 temp2=k;
                 matrix[temp1][temp2]=1;
                 break;
               case 'n':  matrix[i][j]=0;
                 k=temp1;
                 temp1=temp2;
                 temp2=k;
                 matrix[temp1][temp2]=0;
                 break;
               default : printf("y/n");
               }
               if(j<=nodes){
                 z++;
             }
	    }
       }
       y++;
    }
    
    calculate_path(matrix,nodes);
   }
   
   void calculate_path(int matrix[20][20],int nodes)
   {
       int final_total[nodes],total,z=0,i,j,x=65,y=65,value1,value2;
       char starting_node,ending_node;
       printf("enter the starting node ");
       scanf("%s",&starting_node);
       printf("enter the ending node ");
       scanf("%s",&ending_node);
       value1=(int) starting_node;
       value2=(int) ending_node;
       value1=value1-x;
       value2=value2-x;
       for(i=value1;i<=nodes;i++)
        {
         for(j=1;j<=nodes;j++)
          {
	        if(a[i][j]==1)
            {
                if(j==value2)
                {
                    total=total+a[i][i];
                    final_total[z]=total;
                    z++;
                    break;
                }
            else{
                total=total+a[i][i];
                value1=j;
                break;
               }
            }
          }
              //printf("%d ",matrix[i][j]);
          }
	       printf("\n");
        }
    }
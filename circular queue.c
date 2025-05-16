#include <stdio.h>
#define MAX 100

int main() {
    int q[MAX], size, front = -1, rear = -1, ch, val;

    printf("Enter size: ");
    scanf("%d", &size);

  while (ch!=4) {
     printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\nChoice: ");
   scanf("%d", &ch);
 switch (ch) {
 case 1:
  if ((rear + 1) % size == front)
    printf("Queue is Full\n");
   else {
     printf("Enter value: ");
   scanf("%d", &val);
    if (front == -1)
    front = rear = 0;
  else
    rear = (rear + 1) % size;
      q[rear] = val;
    }
     break;
case 2:
  if (front == -1)
     printf("Queue is Empty\n");
  else {
 printf("Dequeued: %d\n", q[front]);
    if (front == rear)
    front = rear = -1;
    else
  front = (front + 1) % size;
     }
    break;
   case 3:
  if (front == -1)
printf("Queue is Empty\n");
  else {
   int i = front;
    printf("Queue: ");
while (1) {
     printf("%d ", q[i]);
  if (i == rear) break;
        i = (i + 1) % size;
      }
    printf("\n");}
      break;
 case 4:printf("exit");
    return 0;

 default:
    printf("Invalid Choice\n");
        }}}

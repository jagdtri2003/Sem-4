import java.util.Scanner;

class Node{
    int data;
    Node next;

    Node(){}

    Node(int data){
        this.data=data;
    }

    int getData(){
        return data;
    }

    void setData(int data){
        this.data=data;
    }

    void setNext(Node next){
        this.next=next;
    }

    Node getNext(){
        return next;
    }

}
class Main{
    public static void main(String[] args) {
        Node Start=null;
        int ch,choice;
        do {
            System.out.println("1.Insert at Beg \n2.Insert at Last ");
            Scanner sc=new Scanner(System.in);
            choice=sc.nextInt();
            switch(choice){
                case 1:
                    
            }
        } while (ch!=0);
    }
}
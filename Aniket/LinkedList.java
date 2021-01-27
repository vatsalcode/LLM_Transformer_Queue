import java.util.Iterator;
import java.util.LinkedList;
import java.util.ListIterator;

public class Demo {
    public static void main(String[] args) {
        LinkedList<String>placesToVisit=new LinkedList<String>();
        addInOrder(placesToVisit,"Sydney");
        addInOrder(placesToVisit,"Melbourne");
        addInOrder(placesToVisit,"Brisbane");
        addInOrder(placesToVisit,"Perth");
        addInOrder(placesToVisit,"Caberra");
        addInOrder(placesToVisit,"Adelaide");
        addInOrder(placesToVisit,"Darwin");
        printLinkedList(placesToVisit);
        addInOrder(placesToVisit,"Lucknow");
        printLinkedList(placesToVisit);
    }
    public static void printLinkedList(LinkedList<String> linkedList){
        Iterator<String> i =linkedList.iterator();
        while(i.hasNext()){
            System.out.println("Now visiting "+i.next());
        }
        System.out.println("====================================");
    }
    public static boolean addInOrder(LinkedList<String> linkedList,String newCity){
        ListIterator<String> i=linkedList.listIterator();
        while(i.hasNext()){
            int comparison=i.next().compareTo(newCity);
            if(comparison==0) {
                System.out.println("City already exists");
                return false;
            }
            else if(comparison>0){
                i.previous();
                i.add(newCity);
                return true;
            }
            else if(comparison<0){}
                //continue;
        }
        i.add(newCity);
       return true;
    }
}

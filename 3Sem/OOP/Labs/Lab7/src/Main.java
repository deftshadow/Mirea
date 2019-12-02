public class Main {

    public static void main(String[] args) {
	MyArrayList list = new MyArrayList();
	list.add(13);
	list.add(100);
	list.add(120);
	list.write();
    System.out.println("Текущий размер списка  - "+String.valueOf(list.size()));
    System.out.println("Удаляем элемент");
    list.removeAt(1);
	System.out.println("Удаляем элемент");
	list.write();
	System.out.println("Вставим элемент в начало");
	list.add(0, -2000);
	System.out.println("Вставим элемент по индексу");
	list.add(list.size()-1, -5000);
	list.write();
	System.out.println("Удаляем элемент -2000");
	list.remove(-2000);
	list.write();
	System.out.println("Пробуем удалить 0");
	list.remove(0);
    }
}

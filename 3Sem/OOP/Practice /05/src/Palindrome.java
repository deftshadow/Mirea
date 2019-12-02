public class Palindrome {
    public static String recursion(String word) {
        if (word.length() == 1)
            return "YES";
        else {
            if (word.substring(0, 1).equals(word.substring(word.length() - 1))) {
                if (word.length() == 2)
                    return "YES";
                return recursion(word.substring(1, word.length() - 1));
            } else {
                return "NO";
            }
        }
    }

    public static void main(String[] args) {
        System.out.println(recursion("довод"));
    }
}


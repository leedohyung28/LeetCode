class Solution {
    public int romanToInt(String s) {
        int result = 0;
        String b = "";
        for (int i=0; i<s.length(); i++) {
            String c = s.substring(i, i+1);
            if (c.equals("M")) {
                if (b.equals("C")) {
                    result += 800;
                } else {
                    result += 1000;
                }
            } else if (c.equals("D")) {
                if (b.equals("C")) {
                    result += 300;
                } else {
                    result += 500;
                }
            } else if (c.equals("C")) {
                if (b.equals("X")) {
                    result += 80;
                } else {
                    result += 100;
                }
            } else if (c.equals("L")) {
                if (b.equals("X")) {
                    result += 30;
                } else {
                    result += 50;
                }
            } else if (c.equals("X")) {
                if (b.equals("I")) {
                    result += 8;
                } else {
                    result += 10;
                }
            } else if (c.equals("V")) {
                if (b.equals("I")) {
                    result += 3;
                } else {
                    result += 5; 
                }
            } else if (c.equals("I")) {
                result += 1;
            }
            b = c;
        }
        return result;
    }
}

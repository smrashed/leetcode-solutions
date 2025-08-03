class Solution {
    public int compress(char[] chars) {
        int len = chars.length;
        int k = 0;

        for (int i = 0; i < len;) {
            int j = i + 1;

            if (j < len && chars[i] == chars[j]) {
                while (j < len && chars[i] == chars[j]) {
                    j++;
                }
                chars[k++] = chars[i];

                String str = Integer.toString(j - i);

                for (int i1 = 0; i1 < str.length(); i1++) {
                    int cnt = (str.charAt(i1) - 48);
                    chars[k++] = (char) (cnt + 48);
                }

                i = j;
            } else {
                chars[k++] = chars[i];
                i++;
            }
        }

        return k;
    }
}
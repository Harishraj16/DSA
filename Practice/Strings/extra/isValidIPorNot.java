public class ValidateIPv4 {
    public static boolean isValidIPv4(String ip) {
        if (ip == null || ip.isEmpty()) {
            return false;
        }

        String[] parts = ip.split("\\.");
        if (parts.length != 4) {
            return false;
        }

        for (String part : parts) {
            if (!isValidPart(part)) {
                return false;
            }
        }

        return true;
    }

    private static boolean isValidPart(String part) {
        try {
            int value = Integer.parseInt(part);
            if (value < 0 || value > 255) {
                return false;
            }
            // Check for leading zeros
            if (part.length() > 1 && part.charAt(0) == '0') {
                return false;
            }
            return true;
        } catch (NumberFormatException e) {
            return false;
        }
    }

    public static void main(String[] args) {
        String[] testIPs = {
            "192.168.1.1",
            "255.255.255.255",
            "0.0.0.0",
            "256.256.256.256",
            "192.168.1.01",
            "192.168.1",
            "192.168.1.abc"
        };

        for (String ip : testIPs) {
            System.out.println(ip + " is valid IPv4 address: " + isValidIPv4(ip));
        }
    }
}

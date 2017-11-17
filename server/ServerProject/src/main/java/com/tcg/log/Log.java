package com.tcg.log;

import java.lang.reflect.InvocationTargetException;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class Log {
	private final static Logger logger = LoggerFactory.getLogger(Log.class);

    public static void error(String msg, Throwable t) {
        if (t instanceof InvocationTargetException) {
            t = ((InvocationTargetException) t).getTargetException();
        }
        if (canFilter(msg)) {
            logger.info(msg);
        } else {
            logger.error("ERROR -- " + msg, t);
        }
    }

    public static void warn(String msg) {
        logger.warn("WARN " + " --- " + msg + getWarnContent());
    }

    public static void infoNoStack(String msg) {
        logger.info("INFO " + " --- " + msg);
    }

    public static void info(String msg) {
        logger.info("INFO " + " --- " + msg);
//        logger.info("INFO " + getInfoContent() + " --- " + msg);
    }

    public static void debug(String msg) {
        logger.debug(msg);
    }

    public static void debugWithContent(String msg) {
        logger.debug("DEBUG " + " --- " + msg + getWarnContent());
    }

    public static void online(String msg) {
        if (!logger.isDebugEnabled()) {
            logger.warn("WARN " + " --- " + msg + getWarnContent());
        }
    }

    private static String getWarnContent() {
        StringBuilder sb = new StringBuilder();
        StackTraceElement[] stacks = Thread.currentThread().getStackTrace();
        for (int i = 3; i < stacks.length; i++) {
            StackTraceElement stack = stacks[i];
            sb.append("\n	at ");
            sb.append(stack.getClassName());
            sb.append(".");
            sb.append(stack.getMethodName());
            sb.append("(");
            sb.append(stack.getFileName());
            sb.append(":");
            sb.append(stack.getLineNumber());
            sb.append(")");
        }
        return sb.toString();
    }

    public static String getInfoContent() {
        StringBuilder sb = new StringBuilder();

        StackTraceElement[] stacks = Thread.currentThread().getStackTrace();
        StackTraceElement stack = stacks[3];

        sb.append(stack.getClassName());
        sb.append(".");
        sb.append(stack.getMethodName());
        sb.append("(");
        sb.append(stack.getFileName());
        sb.append(":");
        sb.append(stack.getLineNumber());
        sb.append(")");

        return sb.toString();
    }

    private static boolean canFilter(String msg) {
        if (msg.contains("远程主机强迫关闭了一个现有的连接")
                || msg.contains("Connection reset by peer")) {
            return true;
        }
        return false;
    }

}

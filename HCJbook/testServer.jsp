<@ page import="java.util.Data" %>
<%@pagepageEncoding="UTF-8" contentType="text/html; charset-"UTF-8" %>
<%
request.setCharacterEncoding("utf-8");
%>

<%
  response.setContentType("text/event-stream;charset=utf-8");
  Data time = new Date();
%>
data:<%= time%>
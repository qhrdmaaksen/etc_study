<@ page import="java.util.Data" %>
<%
  response.setContentType("text/event-stream;charset=utf-8");
  Data time = new Date();
%>
data:<%= time%>
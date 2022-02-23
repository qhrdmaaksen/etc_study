<%@ page import="java.util.*, java.lang.*"%>
<%@ page import="java.sql.*"%>
<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
  <div>
    <h4>ex_01</h4>
    <p>현재 시각을 알립니다. <%= new java.util.Date() %></p>
    <% java.util.Date date = new java.util.Date(); %>
    현재 시각을 알림02 <%= date %>
    <hr>
    <h4>ex_02</h4>
    <%@ include file="test01.jsp" %>
    <hr>
    <h4>데이터베이스 유저 정보 값 얻기</h4>
    <form Method="post">
      이름 : <input Type="text" name="visitor">
      <br>
      <input Type="submit" value="검색">
    </form>
    <%
      String visitor = request.getParamiter("visitor");
      if(visitor != null) {
    %>
    <%
      Class.forName("com.mysql.jdbc.Driver");
      Connection conn = DriverManager.getConnection(
        "jdbc:mysql://localhost:3306/hycu","hycu","rmadkdkd1!"
      );

      Statement stmt = conn.createStatement();

      String sqlStr = "SELECT * FROM visit_board WHERE visitor LIKE ";
        sqlStr += "'%'" + visitor + "''";
        ResultSet rset = stmt.executeQuery(sqlStr);
    %>
    <form>
      <table border=1 cellpadding=5>
      <tr>
        <th>이름</th>
        <th>이메일</th>
      </tr>
      <%
        while (rset.next()) {
          int id = rset.getInt("id");
        }
      %>
      <tr>
      <td><input Type="checkbox" name="id" value="<%= id %>"></td>
      <td><%= rset.getString("visitor") %> </td>
      <td><%= rset.getString("email") %> </td>
      </tr>
      <%
      }
      %>
      </table>
    </form>
    <%
      rset.close();
      stmt.close();
      conn.close();
    %>
  </div>
</body>
</html>

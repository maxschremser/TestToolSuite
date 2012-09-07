<!DOCTYPE html>
<html lang="en">
<head>
  <title>Home</title>
  <meta charset="utf-8">
  <link rel="stylesheet" href="css/reset.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/layout.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/style.css" type="text/css" media="all">
  <script type="text/javascript" src="js/jquery-1.4.2.js" ></script>
  <script type="text/javascript" src="js/cufon-yui.js"></script>
  <script type="text/javascript" src="js/cufon-replace.js"></script>
  <script type="text/javascript" src="js/Myriad_Pro_300.font.js"></script>
  <!--[if lt IE 9]>
  <script type="text/javascript" src="http://info.template-help.com/files/ie6_warning/ie6_script_other.js"></script>
  <script type="text/javascript" src="js/html5.js"></script>
  <![endif]-->
</head>
<body id="page1">
<div class="body3"></div>
<div class="body1">
  <div class="main">
    <!-- header -->
    <header>
      <div id="logo_box">
        <h1><a href="index.html" id="logo">TestToolSuite <span>The solution for fishing courses</span></a></h1>
      </div>
      <nav>
        <ul id="menu">
          <c:choose>
            <c:when test="${page=='index'}">
              <li id="menu_active">
            </c:when>
            <c:otherwise>
               <li>
            </c:otherwise>
          </c:choose><a href="index.jsp">Home</a></li>

          <c:choose>
            <c:when test="${page=='about'}">
              <li id="menu_active">
            </c:when>
            <c:otherwise>
              <li>
            </c:otherwise>
          </c:choose><a href="about.jsp">About</a></li>

          <c:choose>
            <c:when test="${page=='testtool'}">
              <li id="menu_active">
            </c:when>
            <c:otherwise>
              <li>
            </c:otherwise>
          </c:choose><a href="testtool.jsp">TestTool</a></li>

          <c:choose>
            <c:when test="${page=='contacts'}">
              <li id="menu_active" class="bg_none">
            </c:when>
            <c:otherwise>
              <li class="bg_none">
            </c:otherwise>
          </c:choose><a href="contacts.jsp">Contacts</a></li>
        </ul>
      </nav>
      <div class="wrapper">
        <div class="text1">TestToolSuite </div>
        <div class="text2">The Tool for your benefits</div>
        <ul id="icons">
          <li><span>Follow Us!</span></li>
          <li><a href="#"><img src="images/icon1.jpg" alt=""></a></li>
          <li><a href="#"><img src="images/icon2.jpg" alt=""></a></li>
          <li><a href="#"><img src="images/icon3.jpg" alt=""></a></li>
        </ul>
      </div><div class="inner_copy">More <a href="http://www.templatemonster.com/">Website Templates</a> at TemplateMonster.com!</div>
    </header>
    <!-- / header -->

  </div>
</div>
<div class="body2">
  <div class="main">
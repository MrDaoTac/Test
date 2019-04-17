const char MAIN_page[] PROGMEM = R"(
<!DOCTYPE html>
<html>
<style>
	h1{
  color: white;
    text-shadow: 1px 1px 2px black, 0 0 25px blue, 0 0 5px darkblue;
  text-align: center;
  margin-top: 10px;
  }
  h3{
    color:blue;
    text-align: center;
  }
  #on{
    margin-left: 46.5%;
    width: 50px;
    height: 35px;
    border-style: solid;
    border-color: red;
    border-radius: 8px;
    border-width: 3px;
    background-color: white;
    color: black;

  }
  #on:hover{
    background-color: yellow;
    border-style: dashed;
    color: black;
    border-color: red;
  }
  #off{
    width: 50px;
    height: 35px;
    border-style: solid;
    border-color: red;
    border-radius: 8px;
    border-width: 3px;
    background-color: #03A9F4;
    color: #EEFF41;

  }
  #off:hover{
    background-color: #FF8A80;
    border-style: dashed;
    color: #76FF03;
    border-color: blue;
  }


</style>
<head>
	<title>THCS</title>
	<h1>Thuc hanh chuyen sau</h1>
	<link rel="stylesheet" type="text/css" href="/home/quocanh/Desktop/html/style.css">
</head>
<body style="background-color: #FFFF99">
	<h3>LED</h3>
  <a href="ledon"><button id="on">ON</button></a>
  <a href="ledoff"><button id="off">OFF</button></a>

</body>
</html>
)";

body {
    font-family: 'Arial', sans-serif;
    background-color: #fff;
  height: 100vh;
}

.wrapper {
    display: flex;
    align-items: center;
    justify-content: center;
  flex-direction: column;
  min-height: 100%;
}

button::-moz-focus-inner { 
  border: 0;
  padding: 0;
}

#calendari {
    margin: 20px 0;
    position: relative;
    overflow: hidden;
    height: 310px;
    width: 350px;
    font-size: 14px;
    box-shadow: 0px 1px 4px rgba(0,0,0,0);
}
table {
    border-collapse: collapse;
    table-layout: fixed;
    width: 350px;
    box-shadow: 0px 1px 3px rgba(0,0,0,0);
    background-color: #ddd;
    position: absolute;
    top: 0;
    left: 0;
    transform: translateX(0);
    transition: all 0.3s ease;
}
table.actiu {
    transform: translateX(0px)top;
}
table.inactiu {
    transition: all 0.3s 0.01s ease;
}
table.amagat-esquerra {
    transform: translateX(-299px);
}
table.amagat-dreta {
    transform: translateX(300px);
}
td,th {
    text-align: center;
    background-color: #fff;
}
th {
    padding: 10px;
}
tr:first-child th {
    font-size: 20px;
    font-weight: bold;
    border-left: none;
    border-top: none;
}
td:last-child, th:last-child {
  border-right: none;
}

th {
    border-top: 1px solid rgba(0,0,0,0.1);
    border-right: 1px solid rgba(0,0,0,0.1);
    background-color: #649CCF;
    color: #fff;
    text-shadow: 0px -1px 0px rgba(0,0,0,0);
    font-weight: normal;
}
th .any {
    font-size: 12px;
    font-weight: normal;
    display: block;
    text-shadow: none;
    color: rgba(0,0,0,0.3);
}
tr:nth-child(2) th {
    padding: 5px;
}
td {
    padding: 0;
    border-bottom: 1px solid rgba(0,0,0,0.04);
}
td>span {
    color: #aaa;
    padding: 10px;
    display: block;
    border: 2px solid transparent;
    transition: border 0.3s ease;
}

td:nth-child(even)>span {
    background-color: rgba(0,0,0,0.04);
}
td:last-child>span,
td:nth-child(6)>span {
    color: #649CCF;
}
td.avui>span {
    font-weight: bold;
    background-color: #649CCF;
    color: #fff;
    border: 2px solid rgba(100,156,207);
}
td.fora > span {
    opacity: 0.2;
}
td > span:hover {
    background: #CDE6FD;
    color: #fff;
  border: 2px solid rgba(205,230,253);
}
.boto-next, .boto-prev {
    background: rgba(0,0,0,0);
    color: #fff;
    font-family: inherit;
    border: none;
    font-size: 18px;
    font-weight: bold;
    text-shadow: inherit;
    padding:5px 21px 5px 6px;
    line-height: 1px;
    height: 30px;
    width: 30px;
    vertical-align: middle;
    border-radius: 100%;
    position: absolute;
    top: 15px;
}
.boto-next { right: 10px; padding-left: 10px; }
.boto-prev { left: 10px; padding-right: 10px;}
.boto-next:hover,
.boto-prev:hover {
    background: rgba(0,0,0,0.07);
}
button:hover { cursor: pointer; }
button:focus { outline: none; }

footer {
  text-align: center;
  color: #aaa;
  font-weight: normal;
  text-shadow: 0px -1px 0px rgba(0, 0, 0, 0);
  font-size: 0.8em;
  padding: 20px;
}

footer a,
footer a:link {
  color: #fff;
  text-decoration: none;
}

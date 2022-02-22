document.write("이 글은 외부 자바스크립트 파일에서 불러온 내용입니다."+`<br>`+`<br>`);

function setClock() {
  let now = new Date();
  document.getElementById(`clock`).innerHTML = now ;
  setTimeout(`setClock()`,1000);
}
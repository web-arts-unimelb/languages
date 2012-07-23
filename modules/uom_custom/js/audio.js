// Get audio element
var audio = document.getElementsByTagName("audio")[0];
// jump to time offset action
function jumpToTimeoffset(start, end) {
  audio.currentTime = start;
  audio.play();
  setTimeout("audio.pause();", (end - start + 1)*1000);
}

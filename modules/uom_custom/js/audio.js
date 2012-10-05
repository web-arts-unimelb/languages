function jumpToTimeoffset(start, end) {
  // Jump to time offset action
  $('audio').get(0).currentTime = start;

  // Play.
  $('audio').get(0).play();

  // Pause when this offset has finished.
  setInterval( function(){ $('audio').get(0).pause() } ,((end - start + 1)*1000));
}

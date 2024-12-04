<?php
/**
 * @file
 */

/**
 * Class to use for callback of link replacement.
 *
 * @author Thanos
 */
class AutoLoginUrlConvertTextClass {

  /**
   * Account's user ID.
   *
   * @var int
   */
  protected $uid;

  /**
   * Constructor.
   *
   * @param int $uid
   *   User ID.
   */
  public function __construct($uid) {
    $this->uid = $uid;
  }

  /**
   * Replace each link in the text.
   *
   * @param array $matches
   *   Matches array.
   *
   * @return string
   *   Converted URL.
   */
  public function replace(array $matches) {
    // Make a new search to check that the link is not image.
    // I know, not very clean.
    $pattern = '/(\.jpg|\.gif|\.png)/';
    preg_match($pattern, $matches[0], $new_matches);
    if (count($new_matches) > 0) {
      return $matches[0];
    }
    else {
      return auto_login_url_create($this->uid, $matches[0], TRUE);
    }
  }
}

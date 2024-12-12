<?php
/**
 * UcAddressQuote class
 */

/**
 * Defines an object to hold Ubercart address for shipping quotes on products.
 */
class UcAddressQuote extends UcAddress {
  /**
   * @var int
   */
  public $nid;

  /**
   * @inheritdoc
   */
  public function __construct($country = NULL) {
    parent::__construct($country);
  }
}

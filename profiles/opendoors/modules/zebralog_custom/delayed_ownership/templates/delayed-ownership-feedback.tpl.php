<?php
/**
 * @file delayed-ownership-feedback.tpl.php
 * Theme the delayed ownership feedback page.
 */
?>

<div class="do-register-text">
  <?php echo $register ?>
</div>

<div class="do-proceed do-proceed-register">
  <?php echo l(t('Proceed to registration'), 'user/register', array(
  'attributes' => array('class' => array('button')),
  'query' => array('destination' => $destination),
));
  ?>
</div>

<div class="do-seperator"></div>

<div class="do-login-text">
  <?php echo $login ?>
</div>

<div class="do-proceed do-proceed-login">
  <?php echo l(t('Proceed to login'), 'user/login',
  array('attributes' => array('class' => array('button')))); ?>
</div>

<div class="do-separator"></div>

<div class="do-dontregister-text">
  <?php echo $dontregister ?>
</div>

<div class="do-proceed do-proceed-dontregister">
  <?php echo l(t('Proceed without registration'), $destination,
  array('attributes' => array('class' => array('button')))); ?>
</div>


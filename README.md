# Auto Login URL

Creates auto login URLs per account on demand.

You may use
```
auto_login_url_create($uid, $destination, $absolute = FALSE)
```
To create an auto login link for a user.

Or
```
auto_login_url_convert_text($uid, $text)
```
To convert all links of a text to auto login for this user

Also there are two tokens for accounts (for "User" or "Current user"):

- Auto Login URL: `[user:auto-login-url-token]`
- Auto Login URL account edit: `[user:auto-login-url-account-edit-token]`

These may be used in mass emailing modules or anywhere user tokens are
available, for example with Rules.

See also the auto_login_url_token module.

## Installation

- Install this module using the
  [official Backdrop CMS instructions](https://docs.backdropcms.org/documentation/extend-with-modules)

## Issues

Bugs and feature requests should be reported in the
[issue queue](https://github.com/backdrop-contrib/auto_login_url/issues).

## Maintainers

- [indigoxela](https://github.com/indigoxela)
- Additional maintainers welcome

## Credits

Created and maintained for Drupal by [Thanos Nokas (Matrixlord)](https://drupal.org/user/1538394)

## License

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.

; Build an installation profile
;
; This build file will be used to build an installation profile for Opendoors.
;   drush make --no-patch-txt --prepare-install build-opendoors.make build

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][patch][] = "_patches/overlay__add_beforeOpen_CloseDone_events.patch"
projects[drupal][patch][] = "_patches/sqlsrv--install-to-includes-database.patch"

; Opendoors Profile
projects[opendoors][type] = profile
projects[opendoors][download][type] = "git"
projects[opendoors][download][url] = "http://git.drupal.org/project/opendoors.git"
projects[opendoors][download][branch] = "7.x-1.x"

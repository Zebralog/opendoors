; Build a complete drupal site. This build file will included by build-opendoors.make.
;
; It can also be used to build a complete opendoors *site*. Use
; build-opendoors.make if you want to build an *installation profile*. Usually
; that is what you want to do.

api = 2
core = 7.x

; Modules
projects[admin_menu][subdir] = "contrib"
projects[azure][subdir] = "contrib"
projects[azure][version] = "1.x-dev"
projects[azure][patch][] = "https://www.drupal.org/files/issues/1864686_crash_on_linux.patch"
projects[auto_entitylabel][subdir] = "contrib"
projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate_files][subdir] = "contrib"
projects[better_exposed_filters][subdir] = "contrib"
projects[ctools][subdir] = "contrib"
projects[ckeditor_link][subdir] = "contrib"
projects[computed_field][subdir] = "contrib"
projects[computed_field_tools][subdir] = "contrib"
projects[computed_field_tools][patch][] = "https://www.drupal.org/files/issues/duplicate-entry-for-key-primary-1494178-15.patch"
projects[cool_message][subdir] = "contrib"
projects[date][subdir] = "contrib"
projects[devel][subdir] = "contrib"
projects[diff][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[exclude_node_title][subdir] = "contrib"
projects[features][subdir] = "contrib"
projects[field_group][subdir] = "contrib"
projects[field_permissions][subdir] = "contrib"
projects[filter_perms][subdir] = "contrib"
projects[flexslider][subdir] = "contrib"
projects[i18n][subdir] = "contrib"
projects[l10n_client][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[maxlength][subdir] = "contrib"
projects[media][subdir] = "contrib"
projects[module_filter][subdir] = "contrib"
projects[mollom][subdir] = "contrib"
projects[overlay_paths][subdir] = "contrib"
projects[panels][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[pathologic][subdir] = "contrib"
projects[rate][subdir] = "contrib"
projects[registration_role][subdir] = "contrib"
projects[rules][subdir] = "contrib"
projects[simplenews][subdir] = "contrib"
projects[stage_file_proxy][subdir] = "contrib"
projects[sqlsrv][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[transliteration][subdir] = "contrib"
projects[variable][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[views_bulk_operations][subdir] = "contrib"
projects[views_infinite_scroll][subdir] = "contrib"
projects[votingapi][subdir] = "contrib"
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.x-dev"
projects[wysiwyg_filter][subdir] = "contrib"
projects[wysiwyg_linebreaks][subdir] = "contrib"
projects[zen][subdir] = "contrib"

; TODO enable in profile
; projects[metatag][subdir] = ""
; projects[redis][subdir] = "contrib"

; TODO sqlsrv into /includes/database
; TODO apply patches (can we provide them in this profile?)
; TODO azure module needs patch

; TODO we need to download phpazure lib into azure sub directory.

; Libraries
libraries[autopager][type] = "libraries"
libraries[autopager][download][type] = "file"
libraries[autopager][download][url] = "http://jquery-autopager.googlecode.com/files/jquery.autopager-1.0.0.js"
libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.4/ckeditor_4.4.4_basic.zip"
libraries[flexslider][type] = "libraries"
libraries[flexslider][download][type] = "file"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/master.zip"
libraries[socialshareprivacy][type] = "libraries"
libraries[socialshareprivacy][download][type] = "file"
libraries[socialshareprivacy][download][url] = "https://github.com/patrickheck/socialshareprivacy/archive/master.zip"
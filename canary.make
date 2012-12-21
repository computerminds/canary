core = 7.x
api = 2

; Contrib projects (alphabetical order!)
; ==============================================================================

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc3"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.0"

projects[configuration][subdir] = "contrib"
projects[configuration][type] = "module"
projects[configuration][download][type] = "git"
projects[configuration][download][url] = "git://git.drupal.org/project/configuration.git"
projects[configuration][download][revision] = "84f7c1f64875c867bb3844701869904b954196bf"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta4"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.2"

projects[devel][subdir] = "development"
projects[devel][version] = "1.3"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[entity][subdir] = "contrib"
projects[entity][type] = "module"
projects[entity][download][type] = "git"
projects[entity][download][url] = "git://git.drupal.org/project/entity.git"
projects[entity][download][revision] = "e7b054ffe9eca11641204ef0c69c603ff6a03394"
projects[entity][patch][] = "http://drupal.org/files/entity-1815634-01.patch"
; Allow writing to text format.
projects[entity][patch][] = "http://drupal.org/files/1788764-writable_text_format.patch"

projects[entitycache][subdir] = "contrib"
projects[entitycache][version] = "1.1"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "1.7"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.3"

projects[rubik][subdir] = "contrib"
projects[rubik][version] = "4.0-beta8"

projects[tao][subdir] = "contrib"
projects[tao][version] = "3.0-beta4"

projects[views][subdir] = "contrib"
projects[views][version] = "3.5"

projects[xautoload][subdir] = "contrib"
projects[xautoload][version] = "2.7"
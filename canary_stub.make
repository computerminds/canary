core = 7.x
api = 2

projects[drupal][type] = core
projects[drupal][version] = "7.18"

projects[canary][type] = profile
projects[canary][download][type] = git
projects[canary][download][url] = git@github.com:computerminds/canary.git
projects[canary][download][branch] = "develop"

